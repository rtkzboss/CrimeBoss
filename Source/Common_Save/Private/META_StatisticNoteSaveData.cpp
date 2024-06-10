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
    (*this).CrewStatistic.HeistersStatisticData.Empty();
    (*this).MissionsStatistic.FinishedMissions.Empty();
    (*this).MissionsStatistic.LostMissions.Empty();
    (*this).MissionsStatistic.FinishedBigHeists.Empty();
    (*this).MissionsStatistic.CountOftFinishedBigHeists = 0;
    (*this).MissionsStatistic.CountOfLostBigHeists = 0;
    (*this).MissionsStatistic.FinishedMissionWithoutKills.Empty();
    (*this).MissionsStatistic.MissionWithStels = 0;
    (*this).MissionsStatistic.FinishedMissionWithStels = 0;
    (*this).MissionsStatistic.PlayedAmbushes = 0;
    (*this).MissionsStatistic.SurvivedAmbushes = 0;
    (*this).MissionsStatistic.PlayedWarehouseSiege = 0;
    (*this).GoalsStatistic.FinishedGoalsID.Empty();
    (*this).GoalsStatistic.FailedGoalsID.Empty();
    (*this).CampaignStatistic.DaysPlayed = 0;
    (*this).CampaignStatistic.CampaignStatus = EMETA_CareerStatus::None;
    (*this).CampaignStatistic.CareerCompletionReason = EMETA_CareerCompletionReason::NoTurfTiles;
    (*this).CampaignStatistic.ScoreForCampaign = 0;
    (*this).FPSStatistic.KilledGangsters = 0;
    (*this).FPSStatistic.KilledSecurityPersonnel = 0;
    (*this).FPSStatistic.KilledDetectives = 0;
    (*this).FPSStatistic.KilledCivilians = 0;
    (*this).StoryStatistic.PlotlinesFinished.Empty();
    (*this).EconomyStatistic.BankruptcyCount = 0;
    (*this).EconomyStatistic.SuccessfullyFinishedTrades = 0;
    (*this).EconomyStatistic.SpentMoney = 0;
    (*this).EconomyStatistic.EarnedMoney = 0;
    (*this).EconomyStatistic.LostMoneyAfterWarehouse = 0;
    (*this).BossStatistic.GatheredBossPoints = 0.000000000e+00f;
    (*this).BossStatistic.BossLevel = 0;
    (*this).TurfWarStatistic.TurfsAcquiredAsIsolated.Empty();
    (*this).TurfWarStatistic.RecruitedTurfWarSoldiers = 0;
    (*this).TurfWarStatistic.LostTurfWarSoldiers = 0;
    (*this).TurfWarStatistic.DetectivesNeutralized = 0;
    (*this).TurfWarStatistic.BossesEliminated.Empty();
}

