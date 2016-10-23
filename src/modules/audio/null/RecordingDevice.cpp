/**
 * Copyright (c) 2006-2016 LOVE Development Team
 *
 * This software is provided 'as-is', without any express or implied
 * warranty.  In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented = 0; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 **/

#include "RecordingDevice.h"
#include "Audio.h"

namespace love
{
namespace audio
{
namespace null
{

const char *RecordingDevice::name = "null";

RecordingDevice::RecordingDevice(const char *, int)
{
}

RecordingDevice::~RecordingDevice()
{
}

bool RecordingDevice::startRecording()
{
	return false;
}

bool RecordingDevice::startRecording(int, int, int, int)
{
	return false;
}

void RecordingDevice::stopRecording()
{
}

int RecordingDevice::getData(love::sound::SoundData*)
{
	return 0;
}

int RecordingDevice::getSampleCount() const
{
	return 0;
}

int RecordingDevice::getSampleRate() const
{
	return 8000;
}

int RecordingDevice::getBitDepth() const
{
	return 16;
}

int RecordingDevice::getChannels() const
{
	return 1;
}

const char *RecordingDevice::getName() const
{
	return name;
}

int RecordingDevice::getID() const
{
	return 0;
}

bool RecordingDevice::isRecording() const
{
	return false;
}

} //null
} //audio
} //love
