/*
 * Copyright (C) 2015  Sunny <ratsunny@gmail.com>
 *
 * This file is part of Shadowsocks-NaCl.
 *
 * Shadowsocks-NaCl is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Shadowsocks-NaCl is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#include "ppapi/cpp/module.h"
#include "instance.h"


class SSModule : public pp::Module {
  public:
    SSModule() : pp::Module() {}
    virtual ~SSModule() {}

    virtual pp::Instance* CreateInstance(PP_Instance instance) {
      return new SSInstance(instance);
    }
};


namespace pp {
  Module* CreateModule() { return new SSModule(); }
}
