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

#include "core.h"

extern "C" {
#include "engine/board.h"
}

//
// Use this function to reset your engine and prepare it for a new game
//
void reset() {
    // TODO: Your code for resetting your engine goes here...
}

//
// Should return a move for the input color
//
// If your move is to, say, place a stone on position (i, j) of the board, return POS(i, j)
// Otherwise you may return PASS_MOVE
//
int play(int color) {
    int move = PASS_MOVE;
    // TODO: Your code for generating a move goes here...
    return move;
}
