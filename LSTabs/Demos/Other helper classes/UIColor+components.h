//
//  UIColor+components.h
//  LSTabs
//
//  Created by Marco Mussini on 5/24/12.
//  Copyright (c) 2012 Lucky Software. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface UIColor (components)

/**
 * UIColor::getRed:green:blue:alpha: is available only from iOS >= 5
 */
- (const CGFloat *)getRGBAColorComponents;

@end
