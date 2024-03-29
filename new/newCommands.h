//
//  newCommands.h
//  new
//
//  Created by arturo alonso on 6/22/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <AssistantExtensions/SiriObjects.h>

// class to handle commands for the AE Extension
// one or more SECommand class can exist per AE Extension but normally just one
// each different SECommand class must be "registered" in *Extenion's -[initWithSystem:system]

@interface newCommands : NSObject<SECommand>

-(BOOL)handleSpeech:(NSString*)text tokens:(NSArray*)tokens tokenSet:(NSSet*)tokenset context:(id<SEContext>)ctx;

@end
