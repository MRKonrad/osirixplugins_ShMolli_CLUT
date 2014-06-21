//
//  ShMolli_CLUTFilter.h
//  ShMolli_CLUT
//
//  Copyright (c) 2014 Konrad Werys. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <OsiriXAPI/PluginFilter.h>
#import <OsiriXAPI/Notifications.h>

@interface ShMolli_CLUTFilter : PluginFilter {

}

- (long) filterImage:(NSString*) menuName;

@end
