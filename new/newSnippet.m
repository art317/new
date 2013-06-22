//
//  newSnippet.m
//  new
//
//  Created by arturo alonso on 6/22/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import "newSnippet.h"

@implementation newSnippet

- (id)view
{
	return _view;
}

- (void)dealloc
{
	[_view release];
	[super dealloc];
}

- (id)initWithProperties:(NSDictionary*)props;
{
	// NSLog(@"[newSnippet initWithProperties:'%@']", props);

	if ((self = [super init]))
	{
		if (![[NSBundle bundleForClass:[self class]] loadNibNamed:@"newNib" owner:self options:nil])
		{
			NSLog(@"Failed to load nib file.");
			return NO;
		}
		_view = [_nib retain]; 
		[_webView loadRequest:[NSURLRequest requestWithURL:[NSURL URLWithString:[props objectForKey:@"link"]]]];
	}
	return self;
}

@end