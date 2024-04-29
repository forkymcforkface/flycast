/*
	This file is part of Flycast.

    Flycast is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 2 of the License, or
    (at your option) any later version.

    Flycast is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Flycast.  If not, see <https://www.gnu.org/licenses/>.
*/
#pragma once
#include "types.h"

namespace achievements
{
#ifdef USE_RACHIEVEMENTS

bool init();
void term();
void login(const char *username, const char *password);
bool isLoggedOn();

#else

static inline bool init() { return false; }
static inline void term() {}
static inline void login(const char *username, const char *password) {}
static inline bool isLoggedOn() { return false; }

#endif

void serialize(Serializer& ser);
void deserialize(Deserializer& deser);

}
