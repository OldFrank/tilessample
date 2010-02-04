//
//  Tile.h
//  Tiles
//
//  Created by Kristopher Johnson on 2/3/10.
//  Copyright 2010 Capable Hands Technologies, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QuartzCore/QuartzCore.h"


@interface Tile : CALayer {
    NSInteger tileIndex;    
}

@property (nonatomic) NSInteger tileIndex;

- (void)draw;

@end