/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPConfiguration : NSObject {
    _PASLock * _lock;
}

+ (id)_loadConfigPlist;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_loadConfigParams;
- (double)getTopicsMultiplierForSource:(id)arg1 andAlgorithm:(id)arg2;
- (double)halfValuePosition;
- (id)init;
- (unsigned long long)maxNumberOfTopicRecords;
- (unsigned long long)minNumberOfTopicRecords;
- (double)nonReaderTextWeight;
- (double)portraitAnalyticsSamplingRate;
- (id)portraitVariantName;
- (double)remoteTopicsMultiplier;
- (id)resourceForMappingId:(id)arg1;
- (double)scalingFactorForMappingId:(id)arg1;
- (double)topicsScalingFactor;
- (double)topicsSigmoidPeakValue;
- (double)topicsSigmoidWidth;

@end
