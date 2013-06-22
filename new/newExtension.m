//
//  newExtension.m
//  new
//
//  Created by arturo alonso on 6/22/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import "newExtension.h"
#import "newCommands.h"
#import "newSnippet.h"

@implementation newExtension

-(id)initWithSystem:(id<SESystem>)system
{
	if ((self = [super init]))
	{
		[system registerCommand:[newCommands class]];
		[system registerSnippet:[newSnippet class]];
	}
	return self;
}

-(NSString*)author
{
	return @"arturo alonso";
}

-(NSString*)name
{
	return @"new";
}

-(NSString*)description
{
	return @"Created using the iOSOpenDev Xcode template for building an Assistant Extension";
}

-(NSString*)website
{
	return @"http://www.iOSOpenDev.com";
}

-(NSString*)versionRequirement
{
	return @"1.0.1";
}

@end