/***********************************************************************************************************************************
Command and Option Definition

Automatically generated by Build.pm -- do not modify directly.
***********************************************************************************************************************************/
#ifndef CONFIG_DEFINE_AUTO_H
#define CONFIG_DEFINE_AUTO_H

/***********************************************************************************************************************************
Command define enum
***********************************************************************************************************************************/
typedef enum
{
    cfgDefCmdArchiveGet,
    cfgDefCmdArchivePush,
    cfgDefCmdBackup,
    cfgDefCmdCheck,
    cfgDefCmdExpire,
    cfgDefCmdHelp,
    cfgDefCmdInfo,
    cfgDefCmdLocal,
    cfgDefCmdRemote,
    cfgDefCmdRestore,
    cfgDefCmdStanzaCreate,
    cfgDefCmdStanzaDelete,
    cfgDefCmdStanzaUpgrade,
    cfgDefCmdStart,
    cfgDefCmdStop,
    cfgDefCmdVersion,
} ConfigDefineCommand;

/***********************************************************************************************************************************
Option type define enum
***********************************************************************************************************************************/
typedef enum
{
    cfgDefOptTypeBoolean,
    cfgDefOptTypeFloat,
    cfgDefOptTypeHash,
    cfgDefOptTypeInteger,
    cfgDefOptTypeList,
    cfgDefOptTypeSize,
    cfgDefOptTypeString,
} ConfigDefineOptionType;

/***********************************************************************************************************************************
Option define enum
***********************************************************************************************************************************/
typedef enum
{
    cfgDefOptArchiveAsync,
    cfgDefOptArchiveCheck,
    cfgDefOptArchiveCopy,
    cfgDefOptArchiveGetQueueMax,
    cfgDefOptArchivePushQueueMax,
    cfgDefOptArchiveTimeout,
    cfgDefOptBackupStandby,
    cfgDefOptBufferSize,
    cfgDefOptChecksumPage,
    cfgDefOptCmdSsh,
    cfgDefOptCommand,
    cfgDefOptCompress,
    cfgDefOptCompressLevel,
    cfgDefOptCompressLevelNetwork,
    cfgDefOptConfig,
    cfgDefOptConfigIncludePath,
    cfgDefOptConfigPath,
    cfgDefOptDbInclude,
    cfgDefOptDbTimeout,
    cfgDefOptDelta,
    cfgDefOptForce,
    cfgDefOptHostId,
    cfgDefOptLinkAll,
    cfgDefOptLinkMap,
    cfgDefOptLockPath,
    cfgDefOptLogLevelConsole,
    cfgDefOptLogLevelFile,
    cfgDefOptLogLevelStderr,
    cfgDefOptLogPath,
    cfgDefOptLogTimestamp,
    cfgDefOptManifestSaveThreshold,
    cfgDefOptNeutralUmask,
    cfgDefOptOnline,
    cfgDefOptOutput,
    cfgDefOptPerlOption,
    cfgDefOptPgHost,
    cfgDefOptPgHostCmd,
    cfgDefOptPgHostConfig,
    cfgDefOptPgHostConfigIncludePath,
    cfgDefOptPgHostConfigPath,
    cfgDefOptPgHostPort,
    cfgDefOptPgHostUser,
    cfgDefOptPgPath,
    cfgDefOptPgPort,
    cfgDefOptPgSocketPath,
    cfgDefOptProcess,
    cfgDefOptProcessMax,
    cfgDefOptProtocolTimeout,
    cfgDefOptRecoveryOption,
    cfgDefOptRepoCipherPass,
    cfgDefOptRepoCipherType,
    cfgDefOptRepoHardlink,
    cfgDefOptRepoHost,
    cfgDefOptRepoHostCmd,
    cfgDefOptRepoHostConfig,
    cfgDefOptRepoHostConfigIncludePath,
    cfgDefOptRepoHostConfigPath,
    cfgDefOptRepoHostPort,
    cfgDefOptRepoHostUser,
    cfgDefOptRepoPath,
    cfgDefOptRepoRetentionArchive,
    cfgDefOptRepoRetentionArchiveType,
    cfgDefOptRepoRetentionDiff,
    cfgDefOptRepoRetentionFull,
    cfgDefOptRepoS3Bucket,
    cfgDefOptRepoS3CaFile,
    cfgDefOptRepoS3CaPath,
    cfgDefOptRepoS3Endpoint,
    cfgDefOptRepoS3Host,
    cfgDefOptRepoS3Key,
    cfgDefOptRepoS3KeySecret,
    cfgDefOptRepoS3Region,
    cfgDefOptRepoS3VerifySsl,
    cfgDefOptRepoType,
    cfgDefOptResume,
    cfgDefOptSet,
    cfgDefOptSpoolPath,
    cfgDefOptStanza,
    cfgDefOptStartFast,
    cfgDefOptStopAuto,
    cfgDefOptTablespaceMap,
    cfgDefOptTablespaceMapAll,
    cfgDefOptTarget,
    cfgDefOptTargetAction,
    cfgDefOptTargetExclusive,
    cfgDefOptTargetTimeline,
    cfgDefOptTest,
    cfgDefOptTestDelay,
    cfgDefOptTestPoint,
    cfgDefOptType,
} ConfigDefineOption;

#endif
