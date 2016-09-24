/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIDoNotDisturbSetting : CCUISettingModule {
    BOOL  _DNDEnabled;
    BBBehaviorOverride * _activeOverride;
    int  _activeStatus;
    BBSettingsGateway * _settingsGateway;
}

@property (getter=_isDNDEnabled, setter=_setDNDEnabled:, nonatomic) BOOL DNDEnabled;

+ (id)displayName;
+ (id)identifier;
+ (id)statusOffString;
+ (id)statusOnString;

- (void).cxx_destruct;
- (BOOL)_isDNDEnabled;
- (BOOL)_isStateOverridden;
- (void)_setDNDEnabled:(BOOL)arg1;
- (void)_setDNDEnabled:(BOOL)arg1 updateServer:(BOOL)arg2 source:(unsigned int)arg3;
- (void)_setDNDStatus:(int)arg1;
- (BOOL)_stateWithEffectiveOverrides;
- (void)_tearDown;
- (BOOL)_toggleState;
- (void)_updateActiveOverrides:(id)arg1;
- (void)_updateState;
- (void)activate;
- (id)aggdKey;
- (void)deactivate;
- (void)dealloc;
- (id)glyphImageForState:(int)arg1;
- (id)selectedStateColor;
- (id)statusUpdate;

@end