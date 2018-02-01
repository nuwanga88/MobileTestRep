//
//  MapViewAnnotation.h
//  DefectInspector
//
//  Created by NU-MacMini on 10/14/14.
//  Copyright (c) 2014 NU. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>


@interface MapViewAnnotation : NSObject <MKAnnotation>

@property (nonatomic,copy) NSString *title;

@property (nonatomic) CLLocationCoordinate2D coordinate;

@property (nonatomic, readonly) NSString *status;

-(id) initWithTitle:(NSString *) title AndCoordinate:(CLLocationCoordinate2D)coordinate AndStatus:(NSString *)status;

@property (nonatomic, assign) int tag;
@property (nonatomic, assign) int defectNo;
//MFMZ 29/5/2015
@property (nonatomic, assign) NSString *guid;

@property (nonatomic, strong) MapViewAnnotation *clusterAnnotation;
@property (nonatomic, strong) NSArray *containedAnnotations;

@end
