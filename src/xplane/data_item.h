//---------------------------------------------------------------------------------------------------------------------
//   XMidiCtrl - MIDI Controller plugin for X-Plane
//
//   Copyright (c) 2021-2022 Marco Auer
//
//   XMidiCtrl is free software: you can redistribute it and/or modify it under the terms of the
//   GNU Affero General Public License as published by the Free Software Foundation, either version 3
//   of the License, or (at your option) any later version.
//
//   XMidiCtrl is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even
//   the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//   GNU Affero General Public License for more details.
//
//   You should have received a copy of the GNU Affero General Public License along with XMidiCtrl.
//   If not, see <https://www.gnu.org/licenses/>.
//---------------------------------------------------------------------------------------------------------------------

#ifndef _DATA_ITEM_H_
#define _DATA_ITEM_H_

// Standard
#include <memory>

// X-Plane SDK
#include "XPLMDataAccess.h"

namespace xmidictrl {

struct data_item {
    std::string name;
    XPLMDataRef dataref;
    XPLMDataTypeID type;
    std::size_t size;
    bool writeable;
};

} // Namespace XMidiCtrl

#endif // _DATA_ITEM_H_
