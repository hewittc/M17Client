/*
 *   Copyright (C) 2021 by Jonathan Naylor G4KLX
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef	GPSDialog_H
#define	GPSDialog_H

#include <wx/wx.h>

#include <optional>

class CGPSDialog : public wxDialog {

    public:
	CGPSDialog(wxWindow* parent, int id, float latitude, float longitude, const wxString& locator,
			const std::optional<float>& altitude,
			const std::optional<float>& speed, const std::optional<float>& track,
			const std::optional<float>& bearing, const std::optional<float>& distance);
	virtual ~CGPSDialog();

    private:
};

#endif
