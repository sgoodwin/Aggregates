// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to RWSEvent.h instead.

#import <CoreData/CoreData.h>


extern const struct RWSEventAttributes {
	__unsafe_unretained NSString *price;
	__unsafe_unretained NSString *timeStamp;
} RWSEventAttributes;

extern const struct RWSEventRelationships {
} RWSEventRelationships;

extern const struct RWSEventFetchedProperties {
} RWSEventFetchedProperties;





@interface RWSEventID : NSManagedObjectID {}
@end

@interface _RWSEvent : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (RWSEventID*)objectID;





@property (nonatomic, strong) NSNumber* price;



@property int32_t priceValue;
- (int32_t)priceValue;
- (void)setPriceValue:(int32_t)value_;

//- (BOOL)validatePrice:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSDate* timeStamp;



//- (BOOL)validateTimeStamp:(id*)value_ error:(NSError**)error_;






@end

@interface _RWSEvent (CoreDataGeneratedAccessors)

@end

@interface _RWSEvent (CoreDataGeneratedPrimitiveAccessors)


- (NSNumber*)primitivePrice;
- (void)setPrimitivePrice:(NSNumber*)value;

- (int32_t)primitivePriceValue;
- (void)setPrimitivePriceValue:(int32_t)value_;




- (NSDate*)primitiveTimeStamp;
- (void)setPrimitiveTimeStamp:(NSDate*)value;




@end
