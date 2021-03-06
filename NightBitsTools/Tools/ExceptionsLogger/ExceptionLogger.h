//
//  ExceptionLogger.h
//  Created by NightBits
//  Copyright 2013 NightBits. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ExceptionLogger : UIViewController <UITextViewDelegate>
{
	IBOutlet UINavigationItem   *navigationBar;
    NSString                    *path;	    
	IBOutlet UITextView         *textView;
}

@property (nonatomic, strong)	IBOutlet UINavigationItem   *navigationBar;
@property (nonatomic, strong)   IBOutlet UITextView         *textView;

+(ExceptionLogger*)instance;
-(IBAction)updateLog:(id)sender;
-(IBAction)Clear:(id)sender;
-(void)log:(NSString*)exception;

@end
