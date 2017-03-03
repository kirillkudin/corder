//
//  Corder.h
//  Corder
//
//  Created by Corder Team on 1/29/17.
//  Copyright © 2017 Corder. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    kCorderUserSexUnknown,
    kCorderUserSexMan,
    kCorderUserSexWoman
} ECorderUserSex;

@interface Corder : NSObject

/**
 * Init framework, can cause a crash if Firebase is not configured or not installed.
 * This method is thread safe.
 */
+ (void)initWithApiKey:(nonnull NSString*)aApiKey;

/**
 * Set UserId for analytics.
 * This method is thread safe.
 */
+ (void)setUserId:(nonnull NSString*)aUserId;

/**
 * Set UserName for analytics.
 * This method is thread safe.
 */
+ (void)setUserName:(nonnull NSString*)aName;

/**
 * Set UserEmail for analytics.
 * This method is thread safe.
 */
+ (void)setUserEmail:(nonnull NSString*)aEmail;

/**
 * Set UserSex for analytics.
 * This method is thread safe.
 */
+ (void)setUserSex:(ECorderUserSex)aSex;
    
/**
 * Set UserAge for analytics.
 * This method is thread safe.
 */
+ (void)setUserAge:(NSInteger)aAge;

/**
 * Log analytics event. Params can be NSString, NSNumber, all other NSObject classes will be
 * converted to NSString usign [obj description] method. Since Corder depends on Firebase we
 * recommend to use kFIREvent... constants as names for Events and kFIRParam... as names for
 * Events.
 * This method is thread safe.
 */
+ (void)logEvent:(nonnull NSString*)aEventName withParams:(nullable NSDictionary*)aParams;

/**
 * Start session recording.
 * You must run this method from main thread.
 */
+ (void)startReconding;

/**
 * Stop session recording.
 * You must run this method from main thread.
 */
+ (void)stopReconding;

/**
 * Status of recording.
 * You must run this method from main thread.
 */
+ (BOOL)isRecording;

@end
