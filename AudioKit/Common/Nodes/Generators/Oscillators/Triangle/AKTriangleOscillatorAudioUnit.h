//
//  AKTriangleOscillatorAudioUnit.h
//  AudioKit
//
//  Created by Aurelius Prochazka, revision history on Github.
//  Copyright (c) 2016 Aurelius Prochazka. All rights reserved.
//

#ifndef AKTriangleOscillatorAudioUnit_h
#define AKTriangleOscillatorAudioUnit_h

#import <AudioToolbox/AudioToolbox.h>

@interface AKTriangleOscillatorAudioUnit : AUAudioUnit
@property (nonatomic) float frequency;
@property (nonatomic) float amplitude;
@property (nonatomic) float detuning;

- (void)start;
- (void)stop;
- (BOOL)isPlaying;
@end

#endif /* AKTriangleOscillatorAudioUnit_h */
