//
//  MapViewAnnotation.m
//  DefectInspector
//
//  Created by NU-MacMini on 10/14/14.
//  Copyright (c) 2014 NU. All rights reserved.
//

#import "MapViewAnnotation.h"

@implementation MapViewAnnotation

@synthesize coordinate=_coordinate;

@synthesize title=_title;

@synthesize defectNo=_defectNo;
//MFMZ 29/5/2015
@synthesize guid = _guid;

@synthesize status = _status;

-(id) initWithTitle:(NSString *) title AndCoordinate:(CLLocationCoordinate2D)coordinate AndStatus:(NSString *)status
{
    self = [super init];
    _title = title;
    _coordinate = coordinate;
    _status = status;

    return self;
}

- (NSString *)title {
    
    if (self.containedAnnotations.count > 0) {
        return [NSString stringWithFormat:@"%zd Locations", self.containedAnnotations.count + 1];
    }
    
    return _title;
}

@end
