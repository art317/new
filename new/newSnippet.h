//
//  newSnippet.h
//  new
//
//  Created by arturo alonso on 6/22/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

// AssistantExtensions by Mario Hros
// See http://ae.k3a.me/

#import <AssistantExtensions/SiriObjects.h>

// this class represents one visible "snippet" (e.g. Weather, Notes, etc)
// there can be 0, 1 or more different SESnippet classes per AE Extension
// each different SESnippet class must be "registered" in *Extenion's -[initWithSystem:system]

#error iOSOpenDev Post-Template Project Creation Requirement (remove these lines after completed) -- \
 Add a Copy Bundle Resources Build Phase to compile newNib.xib: \
 (1) go to TARGETS > Build Phases > Add Build Phase > Add Copy Bundle Resources, drag and drop newNib.xib into the Copy Bundle Resources item list \
 (2) drag and drop the Copy Bundle Resources Build Phase so that it is ABOVE the Run Script Build Phase

@interface newSnippet : NSObject<SESnippet> {
    UIView* _view;
	IBOutlet UIView* _nib;
	IBOutlet UIWebView* _webView;
}

- (id)initWithProperties:(NSDictionary*)props;
- (id)view;

@end