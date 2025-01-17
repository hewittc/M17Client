/*
 *   Copyright (C) 2018,2020,2021 by Jonathan Naylor G4KLX
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

#if defined(USE_GPIO)

#if !defined(GPIO_H)
#define	GPIO_H

#include <string>

#include <gpiod.h>

class CGPIO {
public:
	CGPIO(unsigned int statusPin, bool pttInvert, unsigned int pttPin, bool volumeInvert, unsigned int volumeUpPin, unsigned int volumeDownPin);
	~CGPIO();

	bool open();

	void setStatus(bool tx);

	bool getPTT();

	bool getVolumeUp();
	bool getVolumeDown();

	void close();

private:
	unsigned int m_statusPin;
	bool         m_pttInvert;
	unsigned int m_pttPin;
	bool         m_volumeInvert;
	unsigned int m_volumeUpPin;
	unsigned int m_volumeDownPin;
	gpiod_chip*  m_chip;
	gpiod_line*  m_status;
	gpiod_line*  m_ptt;
	gpiod_line*  m_volumeUp;
	gpiod_line*  m_volumeDown;
};

#endif

#endif
