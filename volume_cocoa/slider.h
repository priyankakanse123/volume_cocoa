//
//  slider.h
//  volume_cocoa
//
//  Created by BridgeLabz on 18/12/15.
//  Copyright © 2015 BridgeLabz. All rights reserved.
//

#ifndef slider_h
#define slider_h
#import <Foundation/Foundation.h>
#import <Cocoa/Cocoa.h>

@interface slider:NSObject

{
    IBOutlet NSTextField *label;
    IBOutlet NSSlider *slide;
}
-(IBAction)sliderChange:(id)sender;


@end


#endif /* slider_h */
