//
//  slider.m
//  volume_cocoa
//
//  Created by BridgeLabz on 18/12/15.
//  Copyright © 2015 BridgeLabz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "slider.h"
@implementation slider
-(void)awakeFromNib
{
    [slide setIntValue:25 ];
    [label setIntValue:[slide integerValue]];
    
}
-(IBAction)sliderChange:(id)sender;
{
    [label setIntValue:[slide integerValue]];
    
}
@end
