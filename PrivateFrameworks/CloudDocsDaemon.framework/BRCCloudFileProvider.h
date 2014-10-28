/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class NSMutableDictionary, NSString;

@interface BRCCloudFileProvider : BRCFileProvider <BRItemNotificationReceiving, BRCReachabilityDelegate> {
    NSMutableDictionary *_downloadTrackersByDocID;
    NSMutableDictionary *_pipeByURL;
    NSMutableDictionary *_readersURLAndIDToDocID;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)__provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 session:(id)arg3 completionHandler:(id)arg4;
- (void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2;
- (id)_fileReactorID;
- (BOOL)_hasPendingReaderForDocumentID:(id)arg1;
- (void)_itemWasMadeLive:(id)arg1;
- (id)_physicalURLForURL:(id)arg1;
- (void)_provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 completionHandler:(id)arg3;
- (void)_registerPresenterForItemAtURL:(id)arg1 key:(id)arg2 session:(id)arg3;
- (void)_unregisterPresenterForItemAtURL:(id)arg1 key:(id)arg2;
- (void)cancelAllCoordinationProviders;
- (void)dumpToContext:(id)arg1;
- (id)initWithURL:(id)arg1;
- (oneway void)invalidate;
- (void)networkReachabilityChanged:(BOOL)arg1;
- (void)receiveUpdates:(id)arg1 logicalExtensions:(id)arg2 physicalExtensions:(id)arg3 reply:(id)arg4;

@end