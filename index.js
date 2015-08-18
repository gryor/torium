'use strict';

Object.defineProperty(exports, '__esModule', {
	value: true
});

var _createClass = (function () { function defineProperties(target, props) { for (var i = 0; i < props.length; i++) { var descriptor = props[i]; descriptor.enumerable = descriptor.enumerable || false; descriptor.configurable = true; if ('value' in descriptor) descriptor.writable = true; Object.defineProperty(target, descriptor.key, descriptor); } } return function (Constructor, protoProps, staticProps) { if (protoProps) defineProperties(Constructor.prototype, protoProps); if (staticProps) defineProperties(Constructor, staticProps); return Constructor; }; })();

function _interopRequireDefault(obj) { return obj && obj.__esModule ? obj : { 'default': obj }; }

function _classCallCheck(instance, Constructor) { if (!(instance instanceof Constructor)) { throw new TypeError('Cannot call a class as a function'); } }

var _buildDebugNode = require('./build/debug.node');

var _buildDebugNode2 = _interopRequireDefault(_buildDebugNode);

var Torium = (function () {
	function Torium() {
		_classCallCheck(this, Torium);
	}

	_createClass(Torium, [{
		key: 'random',
		value: function random(size) {
			if (!Number.isInteger(size) || size < 1) return Promise.reject(new Error('size should be an integer number and greater than 0'));

			return new Promise(function (success) {
				_buildDebugNode2['default'].random(size, success);
			});
		}
	}]);

	return Torium;
})();

exports.Torium = Torium;

var tor = new Torium();
exports['default'] = tor;
