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

#ifndef BASEGO_CORE_H_
#define BASEGO_CORE_H_

#ifdef __cplusplus
extern "C" {
#endif

void reset();
int play(int color);

#ifdef __cplusplus
}  // closing brace for extern "C"
#endif

#endif  // BASEGO_CORE_H_
