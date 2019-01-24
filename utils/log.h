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

#ifndef BASEGO_UTILS_LOG_H_
#define BASEGO_UTILS_LOG_H_

#include <boost/log/sources/global_logger_storage.hpp>
#include <boost/log/sources/severity_logger.hpp>
#include <boost/log/trivial.hpp>

namespace logging = boost::log;

BOOST_LOG_INLINE_GLOBAL_LOGGER_DEFAULT(sev_logger, logging::sources::severity_logger< logging::trivial::severity_level >)

void init_logger();

void end_logger();

#define DEBUG_LOG BOOST_LOG_SEV(sev_logger::get(), logging::trivial::debug)
#define INFO_LOG BOOST_LOG_SEV(sev_logger::get(), logging::trivial::info)
#define WARNING_LOG BOOST_LOG_SEV(sev_logger::get(), logging::trivial::warning)

#endif  // BASEGO_UTILS_LOG_H_
