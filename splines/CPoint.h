//
//  CPoint.h
//  splines
//
//  Created by Oluwapelumi on 7/22/17.
//  Copyright © 2017 Oluwapelumi. All rights reserved.
//

#ifndef CPoint_h
#define CPoint_h

#import <UIKit/UIKit.h>

///////////////////////////////////////////////////
///Can't store raw CGPoint in array so here's a simple Point class for that
@interface CPoint:NSObject
@property CGPoint point;
-(id) initWithCGPoint:(CGPoint) point;
@end
/////////////////////////////////////////

#endif /* CPoint_h */
