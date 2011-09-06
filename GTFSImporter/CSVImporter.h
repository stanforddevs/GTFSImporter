//
//  CSVImporter.h
//  San Jose Transit GTFS
//
//  Created by Vashishtha Jogi on 8/27/11.
//  Copyright 2011 Adobe Systems Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CSVImporter : NSObject

- (NSString *)parseForFile:(NSString *)file;
- (int) addAgency;
- (int) addCalendar;
- (int) addFareAttributes;
- (int) addFareRules;
- (int) addRoute;
- (int) addStop;
- (int) addStopRoutes;
- (int) addStopTime;
- (int) addTrip;
- (void) sanitizeData;
- (void) vacuum;
- (void) reindex;


@end