// AGS2ClientStub
// Game-client plugin stub for AGS
// Copyright � 2014-2018 MonkeyMoto Productions, Inc.

#ifndef AGS2CLIENT_ACHIEVEMENTSSTUB_H
#define AGS2CLIENT_ACHIEVEMENTSSTUB_H

#include "ags2client/IClientAchievements.h"

namespace AGS2Client
{
    namespace Stub
    {
        class AchievementsStub : public AGS2Client::IClientAchievements
        {
		public:
#ifndef AGS2CLIENT_HAS_CPP11 // NOT C++11
			AchievementsStub() noexcept {}

			~AchievementsStub() noexcept {}
#else // C++11
			AchievementsStub() noexcept = default;

			~AchievementsStub() noexcept = default;
#endif // C++11

			static AchievementsStub& GetAchievementsStub() noexcept;
			bool ResetAchievement(char const*) const noexcept override;
			bool IsAchievementAchieved(char const*) const noexcept override;
			bool SetAchievementAchieved(char const*) const noexcept override;
        };
    } // namespace Stub
} // namespace AGS2Client

#endif // AGS2CLIENT_ACHIEVEMENTSSTUB_H
