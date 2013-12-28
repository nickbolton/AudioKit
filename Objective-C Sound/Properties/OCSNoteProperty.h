//
//  OCSNoteProperty.h
//  Objective-C Sound
//
//  Created by Aurelius Prochazka on 9/22/12.
//  Copyright (c) 2012 Hear For Yourself. All rights reserved.
//

#import "OCSConstant.h"

/** Note properties are properties of an instrument that are defined
 per each note generated by an instrument.
 */

@class OCSNote;

@interface OCSNoteProperty : OCSConstant {
    Float32 currentValue;
}

/// Current value of the property.
@property (nonatomic, assign) Float32 value;

/// Minimum Value allowed.
@property (nonatomic, assign) Float32 minimumValue;

/// Maximum Value allowed.
@property (nonatomic, assign) Float32 maximumValue;

/// Optional pretty name for properties useful for debugging.
@property (nonatomic, strong) NSString *name;

/// Note this property belongs to
@property (nonatomic, strong) OCSNote *note;

/// Csound internal reference number
@property (assign) int pValue;


/// Initialize the property with bounds.
/// @param minimumValue Minimum value.
/// @param maximumValue Maximum value.
- (instancetype)initWithMinimumValue:(float)minimumValue
                        maximumValue:(float)maximumValue;

/// Initialize the property with an initial value and bounds.
/// @param initialValue Initial value.
/// @param minimumValue Minimum value.
/// @param maximumValue Maximum value.
- (instancetype)initWithValue:(float)initialValue
                 minimumValue:(float)minimumValue
                 maximumValue:(float)maximumValue;



/// Randomize the current value between the minimum and maximum values
- (void)randomize;

+ (id)duration;

@end
