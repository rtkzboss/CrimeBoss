#include "META_StatisticNoteSaveData.h"
#include "EMETA_CareerCompletionReason.h"
#include "EMETA_CareerStatus.h"

FMETA_StatisticNoteSaveData::FMETA_StatisticNoteSaveData() {
    (*this).CrewStatistic.HiredGenericHeisters = 0;
    (*this).CrewStatistic.LostGenericHeisters = 0;
    (*this).CrewStatistic.HiredUniqueHeisters = 0;
    (*this).CrewStatistic.PromotedToVeteran = 0;
    (*this).CrewStatistic.PromotedToElite = 0;
    (*this).CrewStatistic.LostUniqueHeisters = 0;
    (*this).CrewStatistic.DeserterUniqueHeisters = 0;
    (*this).CrewStatistic.DeserterHeisters = 0;
    (*this).CrewStatistic.ArrestedHeisters = 0;
    (*this).CrewStatistic.MissingUniqueHeisters = 0;
    (*this).CrewStatistic.MissingHeisters = 0;
    auto& gen2177 = (*this).CrewStatistic.HeistersStatisticData;
    gen2177.Empty();
    auto& gen2178 = (*this).MissionsStatistic.FinishedMissions;
    gen2178.Empty();
    auto& gen2179 = (*this).MissionsStatistic.LostMissions;
    gen2179.Empty();
    auto& gen2180 = (*this).MissionsStatistic.FinishedBigHeists;
    gen2180.Empty();
    (*this).MissionsStatistic.CountOftFinishedBigHeists = 0;
    (*this).MissionsStatistic.CountOfLostBigHeists = 0;
    auto& gen2181 = (*this).MissionsStatistic.FinishedMissionWithoutKills;
    gen2181.Empty();
    (*this).MissionsStatistic.MissionWithStels = 0;
    (*this).MissionsStatistic.FinishedMissionWithStels = 0;
    (*this).MissionsStatistic.PlayedAmbushes = 0;
    (*this).MissionsStatistic.SurvivedAmbushes = 0;
    (*this).MissionsStatistic.PlayedWarehouseSiege = 0;
    auto& gen2182 = (*this).GoalsStatistic.FinishedGoalsID;
    gen2182.Empty();
    auto& gen2183 = (*this).GoalsStatistic.FailedGoalsID;
    gen2183.Empty();
    (*this).CampaignStatistic.DaysPlayed = 0;
    (*this).CampaignStatistic.CampaignStatus = EMETA_CareerStatus::None;
    (*this).CampaignStatistic.CareerCompletionReason = EMETA_CareerCompletionReason::NoTurfTiles;
    (*this).CampaignStatistic.ScoreForCampaign = 0;
    (*this).FPSStatistic.KilledGangsters = 0;
    (*this).FPSStatistic.KilledSecurityPersonnel = 0;
    (*this).FPSStatistic.KilledDetectives = 0;
    (*this).FPSStatistic.KilledCivilians = 0;
    auto& gen2184 = (*this).StoryStatistic.PlotlinesFinished;
    gen2184.Empty();
    (*this).EconomyStatistic.BankruptcyCount = 0;
    (*this).EconomyStatistic.SuccessfullyFinishedTrades = 0;
    (*this).EconomyStatistic.SpentMoney = 0;
    (*this).EconomyStatistic.EarnedMoney = 0;
    (*this).EconomyStatistic.LostMoneyAfterWarehouse = 0;
    (*this).BossStatistic.GatheredBossPoints = 0.000000000e+00f;
    (*this).BossStatistic.BossLevel = 0;
    auto& gen2185 = (*this).TurfWarStatistic.TurfsAcquiredAsIsolated;
    gen2185.Empty();
    (*this).TurfWarStatistic.RecruitedTurfWarSoldiers = 0;
    (*this).TurfWarStatistic.LostTurfWarSoldiers = 0;
    (*this).TurfWarStatistic.DetectivesNeutralized = 0;
    auto& gen2186 = (*this).TurfWarStatistic.BossesEliminated;
    gen2186.Empty();
}

