//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@interface ReportVoiceResultMgr : MMObject <PBMessageObserverDelegate>
{
}

- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)ReportResult:(id)arg1 AndResult:(id)arg2;
- (void)dealloc;

@end
