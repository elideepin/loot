/*  LOOT

    A load order optimisation tool for Oblivion, Skyrim, Fallout 3 and
    Fallout: New Vegas.

    Copyright (C) 2012-2016    WrinklyNinja

    This file is part of LOOT.

    LOOT is free software: you can redistribute
    it and/or modify it under the terms of the GNU General Public License
    as published by the Free Software Foundation, either version 3 of
    the License, or (at your option) any later version.

    LOOT is distributed in the hope that it will
    be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with LOOT.  If not, see
    <https://www.gnu.org/licenses/>.
    */
#ifndef LOOT_PLUGIN_MESSAGE
#define LOOT_PLUGIN_MESSAGE

#include "loot/message_type.h"

namespace loot {
/**
 *  @brief A structure that holds the type of a message and the message
 *      string itself.
 */
class PluginMessage {
public:
  /**
    *  @var type
    *      The type of the message, specified using one of the message
    *      type codes.
    *  @var text
    *      The message string, which may be formatted using
    *      [GitHub Flavored Markdown]
    *      (https://help.github.com/articles/github-flavored-markdown).
    */
  MessageType type;
  std::string text;
};
}

#endif