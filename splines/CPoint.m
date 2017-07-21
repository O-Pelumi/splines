//
//  CPoint.m
//  splines
//
//  Created by Oluwapelumi on 7/22/17.
//  Copyright © 2017 Oluwapelumi. All rights reserved.
//

#import "CPoint.h"

@implementation CPoint

-(id) initWithCGPoint:(CGPoint) point{
    self = [super init];
    if (self){
        _point = point;
    }
    return self;
}
@end
