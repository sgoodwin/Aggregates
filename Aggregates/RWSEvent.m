#import "RWSEvent.h"

@implementation RWSEvent

+ (NSNumber *)averageInContext:(NSManagedObjectContext *)context
{
    NSFetchRequest *request = [[NSFetchRequest alloc] init];
    request.entity = [self entityInManagedObjectContext:context];
    request.resultType = NSDictionaryResultType;

    NSString *key = @"poopin";
    NSExpression *argument = [NSExpression expressionForKeyPath:@"price"];
    NSExpression *mathExpression = [NSExpression expressionForFunction:@"sum:" arguments:@[argument]];
    NSExpressionDescription *mathDescription = [[NSExpressionDescription alloc] init];
    mathDescription.expression = mathExpression;
    mathDescription.name = key;
    mathDescription.expressionResultType = NSInteger32AttributeType;

    [request setPropertiesToFetch:@[mathDescription]];

    NSError *fetchError;
    NSArray *results = [context executeFetchRequest:request error:&fetchError];
    NSParameterAssert(results);

    return [results firstObject][key];
}

@end
