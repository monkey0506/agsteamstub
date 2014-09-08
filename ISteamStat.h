// AGSteamStub
// Plugin stub for the Steam plugin for AGS
//
// This stub is a non-functional replacement for the AGSteam plugin. The
// full plugin cannot be made open-source due to restrictions enforced
// by Valve's strict licensing on the Steamworks API. If you are a
// developer who has signed an NDA with Valve and have access to
// Steamworks, access can be granted to the full plugin source. For more
// information you may contact monkey_05_06 on the AGS forums at:
// <http://www.adventuregamestudio.co.uk/forums/index.php?action=profile&u=2015>
//
// Copyright � 2014 MonkeyMoto Productions, Inc.
// This work is free. You can redistribute it and/or modify it under the
// terms of the Do What The Fuck You Want To Public License, Version 2,
// as published by Sam Hocevar. See the LICENSE file for more details.
//
//            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
//                    Version 2, December 2004
//
// Copyright (C) 2004 Sam Hocevar <sam@hocevar.net>
//
// Everyone is permitted to copy and distribute verbatim or modified
// copies of this license document, and changing it is allowed as long
// as the name is changed.
//
//            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
//   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION
//
//  0. You just DO WHAT THE FUCK YOU WANT TO.
//
#ifndef AGSTEAM_ISTEAMSTAT_H
#define AGSTEAM_ISTEAMSTAT_H

namespace AGSteam
{
namespace Stub
{

enum StatTypes
{
    eAGSteamStatInt = 0,
    eAGSteamStatFloat = 1,
    eAGSteamStatAvgRate = 2
};

class ISteamStat
{
public:
    virtual int GetIntStat(char const *name) = 0;
    virtual float GetFloatStat(char const *name) = 0;
    virtual float GetAvgRateStat(char const *name) = 0;
    virtual bool SetIntStat(char const *name, int value) = 0;
    virtual bool SetFloatStat(char const *name, float value) = 0;
    virtual bool UpdateAvgRateStat(char const *name, float numerator, float denominator) = 0;
    virtual int GetGlobalIntStat(char const *name) = 0;
    virtual float GetGlobalFloatStat(char const *name) = 0;
    virtual void ResetStats() = 0;
    virtual ~ISteamStat() = 0;
}; // class ISteamStat

ISteamStat* GetSteamStat();
int SteamStat_GetIntStat(char const *name);
float SteamStat_GetFloatStat(char const *name);
float SteamStat_GetAvgRateStat(char const *name);
int SteamStat_SetIntStat(char const *name, int value);
int SteamStat_SetFloatStat(char const *name, float value);
int SteamStat_UpdateAvgRateStat(char const *name, float numerator, float denominator);
int SteamStat_GetGlobalIntStat(char const *name);
float SteamStat_GetGlobalFloatStat(char const *name);
void SteamStat_ResetStats();

} // namespace Stub
} // namespace AGSteam

#endif // AGSTEAM_ISTEAMSTAT_H
