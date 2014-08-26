//
//  ViewController.h
//  ReprodeAudio
//
//  Created by Estudiante on 16/08/14.
//  Copyright (c) 2014 Diego Zapata Murillo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>


@interface ViewController : UIViewController <AVAudioPlayerDelegate>

- (IBAction)pLay:(id)sender;
- (IBAction)sTop:(id)sender;
- (IBAction)pause:(id)sender;
- (IBAction)changeVolume:(id)sender;
- (IBAction)changeSpeed:(id)sender;
- (IBAction)changeOptions:(id)sender;
@property (strong, nonatomic) IBOutlet UILabel *labelTime;

@property (strong, nonatomic) IBOutlet UIView *optiopnsContainer;


@property (strong, nonatomic) IBOutlet UIProgressView *progressBar;




@property (strong, nonatomic) AVAudioPlayer * reproductor;


@end
