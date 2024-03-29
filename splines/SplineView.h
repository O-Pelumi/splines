//
//  SplineView.h
//  splines
//
//  Created by Oluwapelumi on 5/5/17.
//  Copyright © 2017 Oluwapelumi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CPoint.h"

@interface SplineView : UIView

- (int) getIterationNumber;
- (void) setIterationNumber:(int) iter;
- (void) clearCanvas:(UIButton*) btn;

- (void) addPoint:(CGPoint) newPoint;

@end
