/*
* Liam Ashdown
* Copyright (C) 2019
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _SERVER_MISC_PACKETS_h
#define _SERVER_MISC_PACKETS_h
#include "Common/SharedDefines.h"
#include "Network/ServerPacket.h"
#include "Opcodes.h"
#endif /* _SERVER_MISC_PACKETS_h */

namespace SteerStone
{
    namespace HabboPacket
    {
        namespace FavouriteRoom
        {
            /// SERVER_FAVOURITE_ROOMS_RESULT packet builder
            class FavouriteRoomResult final : public ServerPacket
            {
            public:
                /// Constructor 
                FavouriteRoomResult() : ServerPacket(SERVER_FAVOURITE_ROOMS_RESULT) {}

            public:
                /// Write the packet
                StringBuffer const* Write();
            };


        } ///< NAMESPACE FAVOURITEROOM
    } ///< NAMESPACE HABBOPACKET
} ///< NAMESPACE STEERSTONE