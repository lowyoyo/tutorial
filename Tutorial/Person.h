//
//  Person.h
//  Tutorial
//
//  Created by Justin Domnitz on 12/31/13.
//  Copyright (c) 2013 Justin Domnitz. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject {
    
    int age;
    int weight;

}

-(void) print;
-(void) setAge:(int) a;
-(void) setWeight:(int) w;

@end
