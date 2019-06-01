// This is Base Go, a basic and minimal code derived from GNU Go,
// to start developing your own Go engine.
//
// Copyright (C) 2018, 2019  Bijan Nikkhah
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

#include "log.h"

#include <boost/log/core.hpp>
#include <boost/log/expressions.hpp>
#include <boost/log/sinks/sync_frontend.hpp>
#include <boost/log/sinks/text_file_backend.hpp>
#include <boost/shared_ptr.hpp>

namespace expr = boost::log::expressions;

// Define the attribute keywords
BOOST_LOG_ATTRIBUTE_KEYWORD(line_id, "LineID", unsigned int)
BOOST_LOG_ATTRIBUTE_KEYWORD(severity, "Severity", logging::trivial::severity_level)

void init_logger() {
    boost::shared_ptr< logging::core > core = logging::core::get();

    // backend setup
    boost::shared_ptr< logging::sinks::text_file_backend > backend =
            boost::make_shared< logging::sinks::text_file_backend >(
                    logging::keywords::file_name = "BaseGo.log"
            );
    backend->auto_flush(true);

    // frontend setup
    typedef logging::sinks::synchronous_sink< logging::sinks::text_file_backend > sink_t;
    boost::shared_ptr< sink_t > sink(new sink_t(backend));
    sink->set_formatter(
            expr::stream
                << "[" << severity << "] "
                << expr::smessage
    );
    sink->set_filter(logging::trivial::severity >= logging::trivial::info);

    core->add_sink(sink);
}

void end_logger() {
    logging::core::get()->remove_all_sinks();
}
