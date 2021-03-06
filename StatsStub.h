// AGS2ClientStub
// Game-client plugin stub for AGS
// Copyright � 2014-2018 MonkeyMoto Productions, Inc.

#ifndef AGS2CLIENT_STATSSTUB_H
#define AGS2CLIENT_STATSSTUB_H

#include "ags2client/Cpp11Fix.h"
#include "ags2client/IClientStats.h"

namespace AGS2Client
{
    namespace Stub
    {
        class StatsStub : public AGS2Client::IClientStats
        {
		public:
#ifndef AGS2CLIENT_HAS_CPP11 // NOT C++11
			StatsStub() noexcept {}

			~StatsStub() noexcept {}
#else // C++11
			StatsStub() noexcept = default;

			~StatsStub() noexcept = default;
#endif // C++11

			static StatsStub& GetStatsStub() noexcept;
			int GetIntStat(char const *) const noexcept override;
			float GetFloatStat(char const*) const noexcept override;
			float GetAverageRateStat(char const*) const noexcept override;
			bool SetIntStat(char const*, int) const noexcept override;
			bool SetFloatStat(char const*, float) const noexcept override;
			bool UpdateAverageRateStat(char const*, float, float) const noexcept override;
        };
    } // namespace Stub
} // namespace AGS2Client

#endif // AGS2CLIENT_STATSSTUB_H
