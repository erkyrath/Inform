//
//  IFErrorsPage.h
//  Inform
//
//  Created by Andrew Hunter on 25/03/2007.
//  Copyright 2007 Andrew Hunter. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "IFCompilerController.h"

#import "IFPage.h"

@class IFCompilerController;

//
// The 'errors' page
//
@interface IFErrorsPage : IFPage

// Getting information about this page
@property (atomic, readonly, strong) IFCompilerController *compilerController;				// The compiler controller for this page

- (instancetype) initWithProjectController: (IFProjectController*) controller;

@end
