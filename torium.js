import torium from './build/debug.node';


export class Torium {
	random(size) {
		if(!Number.isInteger(size) || size < 1)
			return Promise.reject(new Error('size should be an integer number and greater than 0'));

		return new Promise(function(success) {
			torium.random(size, success);
		});
	}
}

let tor = new Torium();
export default tor;
