/**
 * \file SetLocale.h
 * \brief This file contains the declaration of class SetLocale.
 *
 * Copyright (C) 2014 Aleric Inglewood.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * \class xml::SetLocale
 * \brief Provides a hook to set a locale (facet) for elements written to / read from a stream.
 *
 * Usage:
 *
 * derive a class from SetLocale and implement the two virtual functions to
 * set a locale on the stream that is used to read/write that class.
 * This will only work when reading/writing that class using one of the
 * xml::Bridge::*_stream methods.
 */

#ifndef XML_SETLOCALE_H
#define XML_SETLOCALE_H

#ifndef USE_PCH
#include <iosfwd>
#endif

namespace xml {

class SetLocale
{
  public:
    /// Set an input locale on an istream. The default does nothing.
    virtual void set_input_locale(std::istream& is) const;
    /// Set an output locale on an ostream. The default does nothing.
    virtual void set_output_locale(std::ostream& os) const;
};

} // namespace xml

#endif // XML_SETLOCALE_H
