/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelStorePlaybackContainer : MPModelObject <MPModelPlayEventProviding> {
    MPModelAlbum * _album;
    unsigned int  _containerType;
    MPModelPlaylist * _playlist;
}

@property (nonatomic, retain) MPModelAlbum *album;
@property (nonatomic) unsigned int containerType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) MPModelPlaylist *playlist;
@property (readonly) Class superclass;

+ (id)__MPModelPropertyStorePlaybackContainerContainerType__PROPERTY;
+ (id)__MPModelRelationshipStorePlaybackContainerAlbum__PROPERTY;
+ (id)__MPModelRelationshipStorePlaybackContainerPlaylist__PROPERTY;
+ (id)__album__KEY;
+ (id)__containerType__KEY;
+ (id)__playlist__KEY;
+ (id)playEventRequestedPropertiesWithAdditionalProperties:(id)arg1;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (BOOL)supportsKeepLocalStatusObservation;
+ (BOOL)supportsLibraryAddStatusObservation;

- (void).cxx_destruct;
- (id)album;
- (unsigned int)containerType;
- (id)descriptionWithType:(int)arg1;
- (struct MPLibraryAddStatusObserverConfiguration { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; })libraryAddStatusObserverConfiguration;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)playEvent;
- (id)playlist;
- (void)setAlbum:(id)arg1;
- (void)setContainerType:(unsigned int)arg1;
- (void)setPlaylist:(id)arg1;

@end