//
//  newExtension.h
//  new
//
//  Created by arturo alonso on 6/22/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <AssistantExtensions/SiriObjects.h>

// main class of the AE extension
// name of this class must be the value of the key NSPrincipalClass in Info.plist
// only one SEExtension class can exist for an AE Extension
// each SECommand and SESnippet class must be registered in this class's -[initWithSystem:system]

@interface newExtension : NSObject<SEExtension>

-(id)initWithSystem:(id<SESystem>)system;

-(NSString*)author;
-(NSString*)name;
-(NSString*)description;
-(NSString*)website;
-(NSString*)versionRequirement;

@end
