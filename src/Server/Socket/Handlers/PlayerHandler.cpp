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
//-----------------------------------------------//
#include "../PlayerSocket.h"
#include "Network/StringBuffer.h"
#include "Database/QueryDatabase.h"
#include "../Entity/Player/Player.h"
//-----------------------------------------------//
namespace Quad
{
    void PlayerSocket::HandleGetCredits(std::unique_ptr<Packet> packet)
    {
        StringBuffer buffer;
        buffer << (std::string)"# WALLETBALANCE\r";
        buffer << (uint32)(ToPlayer()->GetCredits());
        buffer.AppendEndCarriage();
        buffer << (std::string) "# MESSENGERSMSACCOUNT\rnoaccount\r##";
        buffer << (std::string)"# MESSENGERREADY \r##";
        SendPacket((char*)buffer.GetContents(), buffer.GetSize());
    }
}