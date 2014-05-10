// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to RWSEvent.m instead.

#import "_RWSEvent.h"

const struct RWSEventAttributes RWSEventAttributes = {
	.price = @"price",
	.timeStamp = @"timeStamp",
};

const struct RWSEventRelationships RWSEventRelationships = {
};

const struct RWSEventFetchedProperties RWSEventFetchedProperties = {
};

@implementation RWSEventID
@end

@implementation _RWSEvent

+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription insertNewObjectForEntityForName:@"Event" inManagedObjectContext:moc_];
}

+ (NSString*)entityName {
	return @"Event";
}

+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription entityForName:@"Event" inManagedObjectContext:moc_];
}

- (RWSEventID*)objectID {
	return (RWSEventID*)[super objectID];
}

+ (NSSet*)keyPathsForValuesAffectingValueForKey:(NSString*)key {
	NSSet *keyPaths = [super keyPathsForValuesAffectingValueForKey:key];
	
	if ([key isEqualToString:@"priceValue"]) {
		NSSet *affectingKey = [NSSet setWithObject:@"price"];
		keyPaths = [keyPaths setByAddingObjectsFromSet:affectingKey];
		return keyPaths;
	}

	return keyPaths;
}




@dynamic price;



- (int32_t)priceValue {
	NSNumber *result = [self price];
	return [result intValue];
}

- (void)setPriceValue:(int32_t)value_ {
	[self setPrice:[NSNumber numberWithInt:value_]];
}

- (int32_t)primitivePriceValue {
	NSNumber *result = [self primitivePrice];
	return [result intValue];
}

- (void)setPrimitivePriceValue:(int32_t)value_ {
	[self setPrimitivePrice:[NSNumber numberWithInt:value_]];
}





@dynamic timeStamp;











@end
