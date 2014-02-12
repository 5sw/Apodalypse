//
//  APPodLine.h
//  Apodalypse
//
//  Created by ilja on 06.02.14.
//  Copyright (c) 2014 iwascoding GmbH. All rights reserved.
//

#import "APRegexpLine.h"

typedef enum APPodSource {
	APPodSourceMasterRepo = 0,
	APPodSourceExternal,
	} APPodSource;

@interface APPodLine : APRegexpLine

@property (strong) NSString			*name;
@property (strong) NSString			*versionModifier;
@property (strong) NSString			*version;
@property (assign) BOOL				enabled;
@property (assign) APPodSource		source;
@property (strong) NSString			*externalSourceType;
@property (strong) NSString			*externalSourceURL;

@end
