/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMAssociatedMessageItem : IMMessageItem {
    NSString * _associatedMessageGUID;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _associatedMessageRange;
    int  _associatedMessageType;
    NSArray * _consumedSessionPayloads;
}

@property (nonatomic, retain) NSString *associatedMessageGUID;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } associatedMessageRange;
@property (nonatomic) int associatedMessageType;
@property (nonatomic, retain) NSArray *consumedSessionPayloads;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

- (id)associatedMessageGUID;
- (struct _NSRange { unsigned int x1; unsigned int x2; })associatedMessageRange;
- (int)associatedMessageType;
- (id)consumedSessionPayloads;
- (id)copyDictionaryRepresentation;
- (id)copyForBackwardsCompatibility;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 hint:(id)arg2;
- (id)initWithMessageItem:(id)arg1;
- (id)initWithSender:(id)arg1 time:(id)arg2 body:(id)arg3 attributes:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned int)arg6 error:(id)arg7 guid:(id)arg8 associatedMessageGUID:(id)arg9 associatedMessageType:(int)arg10 associatedMessageRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg11 messageSummaryInfo:(id)arg12;
- (id)initWithSenderInfo:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 timePlayed:(id)arg5 subject:(id)arg6 body:(id)arg7 bodyData:(id)arg8 attributes:(id)arg9 fileTransferGUIDs:(id)arg10 flags:(unsigned int)arg11 guid:(id)arg12 messageID:(int)arg13 account:(id)arg14 accountID:(id)arg15 service:(id)arg16 handle:(id)arg17 roomName:(id)arg18 unformattedID:(id)arg19 countryCode:(id)arg20 expireState:(int)arg21 balloonBundleID:(id)arg22 payloadData:(id)arg23 expressiveSendStyleID:(id)arg24 timeExpressiveSendPlayed:(id)arg25 errorType:(unsigned int)arg26 associatedMessageGUID:(id)arg27 associatedMessageType:(int)arg28 associatedMessageRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg29 messageSummaryInfo:(id)arg30;
- (BOOL)isAssociatedMessageItem;
- (BOOL)isBreadcrumb;
- (BOOL)isLastMessageCandidate;
- (BOOL)isMessageAcknowledgment;
- (BOOL)isMessageEdit;
- (BOOL)isSticker;
- (void)setAssociatedMessageGUID:(id)arg1;
- (void)setAssociatedMessageRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setAssociatedMessageType:(int)arg1;
- (void)setConsumedSessionPayloads:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (id)_newChatItems;
- (BOOL)isCancelTypingMessage;
- (BOOL)isIncomingTypingMessage;
- (BOOL)isIncomingTypingOrCancelTypingMessage;
- (BOOL)isTypingOrCancelTypingMessage;
- (BOOL)shouldGenerateTopLevelChatItem;

@end